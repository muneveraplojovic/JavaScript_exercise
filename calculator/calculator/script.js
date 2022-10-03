function display(){
    const outputValue = document.getElementById("output-value").innerHTML("001474")
    console.log(outputValue);
    console.log("Hello world!!")
    const numberInput = document.getElementById("number").innerText("12547")
    console.log(numberInput);
    import React from 'react'
    import { connect } from 'react-redux'
    
    import React from 'react'
    import PropTypes from 'prop-types'
    
    const script = props => {
      return (
        <div>script</div>
      )
    }
    
    script.propTypes = {}
    
    export default script
    export const script = (props) => {
      return (
        <div>script</div>
      )
    }
    
    const mapStateToProps = (state) => ({})
    
    const mapDispatchToProps = {}
    
    export default connect(mapStateToProps, mapDispatchToProps)(script)
}

display()